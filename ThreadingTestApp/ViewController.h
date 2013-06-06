//
//  ViewController.h
//  ThreadingTestApp
//


#import <UIKit/UIKit.h>

@interface ViewController : UIViewController{
    NSOperationQueue *operationQueue;
}

@property (retain, nonatomic) IBOutlet UILabel *label1;
@property (retain, nonatomic) IBOutlet UILabel *label2;
@property (retain, nonatomic) IBOutlet UILabel *label3;
@property (retain, nonatomic) IBOutlet UILabel *label4;


- (IBAction)applyBackgroundColor1;
- (IBAction)applyBackgroundColor2;
- (IBAction)applyBackgroundColor3;

-(void)counterTask;
-(void)colorRotatorTask;
-(void)decreaseCounterTask;

@end
