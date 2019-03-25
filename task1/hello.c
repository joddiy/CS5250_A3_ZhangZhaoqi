#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>
MODULE_LICENSE("GPL");

<<<<<<< HEAD
static char *who = "ZhangZhaoqi";
MODULE_PARM(who, "s");
static int hello_init(void)
{
    printk(KERN_ALERT "Hello, world: %s\n", who);
=======
static char *whom = "world";
module_param(whom, charp, S_IRUGO);

static int hello_init(void)
{
    printk(KERN_ALERT "Hello, %s\n", whom);
>>>>>>> fa3f5ccfbcbebbc39f7f1d9e1a560762c85a4d83
    return 0;
}
static void hello_exit(void)
{
    printk(KERN_ALERT "Goodbye, cruel world\n");
}
module_init(hello_init);
module_exit(hello_exit);
