#include <linux/init.h>
#include <linux/kernel.h> 
#include <linux/module.h> 
 
static int hello_data __initdata = 3;
 
static int __init hello_init(void)
{
    pr_info("Hello, world %d\n", hello3_data);
    return 0;
}
 
static void __exit hello_exit(void)
{
    pr_info("Goodbye, world 3\n");
}
 
module_init(hello_init);
module_exit(hello_exit);
 
MODULE_LICENSE("GPL");
