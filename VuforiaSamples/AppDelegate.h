

#import <UIKit/UIKit.h>
#import "GLResourceHandler.h"

@interface VuforiaSamplesAppDelegate : UIResponder <UIApplicationDelegate>

@property (nonatomic, strong) UIWindow *window;
@property (nonatomic, weak) id<SampleGLResourceHandler> glResourceHandler;

@end

