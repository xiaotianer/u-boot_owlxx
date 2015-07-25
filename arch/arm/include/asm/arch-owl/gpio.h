#ifndef __ARCH_OWLXX_GPIO_H__
#define __ARCH_OWLXX_GPIO_H__

/***generate gpio num, if you don't parse from fdt*********/
#define OWLXX_GPIO_BANKS         5
#define OWLXX_GPIO_PER_BANK      32

enum gpio_group {
	GPIO_GROUP_INVALID = -1,
	GPIO_GROUP_A = 0,
	GPIO_GROUP_B,
	GPIO_GROUP_C,
	GPIO_GROUP_D,
	GPIO_GROUP_E,
};

/* GPIOA/B/C/D/E, GPIOE0~4 */
#define OWLXX_NR_GPIO            (4 * 32 + 4)

#define OWLXX_GPIO_PORTA(x)      ((x) + OWLXX_GPIO_PER_BANK * 0)
#define OWLXX_GPIO_PORTB(x)      ((x) + OWLXX_GPIO_PER_BANK * 1)
#define OWLXX_GPIO_PORTC(x)      ((x) + OWLXX_GPIO_PER_BANK * 2)
#define OWLXX_GPIO_PORTD(x)      ((x) + OWLXX_GPIO_PER_BANK * 3)
#define OWLXX_GPIO_PORTE(x)      ((x) + OWLXX_GPIO_PER_BANK * 4)

#define OWLXX_GPIO_PORT(iogroup, pin_num)	\
	((pin_num) + OWLXX_GPIO_PER_BANK * (iogroup))
/*************************/

enum owlxx_gpiochip_ids {
	OWLXX_GPIOID_MASTER_IC = 1,
	OWLXX_GPIOID_SLAVE_IC,
};

enum of_gpio_flags {
	OF_GPIO_ACTIVE_LOW = 0x1,
};

struct gpio_chip {
	int id;
	int dev_node;
	struct gpiochip_ops *ops;
};

struct owlxx_fdt_gpio_state {
	const char *name;	/* name of the fdt property defining this */
	struct gpio_chip *chip;
	uint gpio;		/* GPIO number, or FDT_GPIO_NONE if none */
	u8 flags;		/* FDT_GPIO_... flags */
};

/*****gpio chip(driver) uses*****************/
struct gpiochip_ops {
	int (*direction_input)(unsigned gpio);
	int (*direction_output)(unsigned gpio, int value);
	int (*get_value)(unsigned gpio);
	int (*set_value)(unsigned gpio, int value);
};

extern int gpiochip_add(int id, int dev_node, struct gpiochip_ops *ops);
/**********************/

/****gpio consumer interface*******/
extern int owlxx_gpio_generic_direction_input(struct gpio_chip *chip,
		unsigned gpio);
extern int owlxx_gpio_generic_direction_output(struct gpio_chip *chip,
		unsigned gpio, int value);
extern int owlxx_gpio_generic_get_value(struct gpio_chip *chip,
		unsigned gpio);
extern int owlxx_gpio_generic_set_value(struct gpio_chip *chip,
		unsigned gpio, int value);

extern int owlxx_fdtdec_decode_gpios(const void *blob, int node,
		const char *prop_name,
		struct owlxx_fdt_gpio_state *gpio, int max_count);
extern int owlxx_fdtdec_decode_gpio(const void *blob, int node,
		const char *prop_name,
		struct owlxx_fdt_gpio_state *gpio);
/**********************/

#endif
