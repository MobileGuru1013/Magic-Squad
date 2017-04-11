
#import <UIKit/UIKit.h>

@interface SampleAppAboutViewController : UIViewController <UIWebViewDelegate>
@property (weak, nonatomic) IBOutlet UIWebView *uiWebView;

@property (nonatomic, copy) NSString * appTitle;
@property (nonatomic, copy) NSString * appAboutPageName;

@end
