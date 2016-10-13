#import <QuartzCore/CAAnimation.h>

@interface MarkerAnimationDelegate: NSObject <CAAnimationDelegate>
@property (nonatomic, copy) void (^onAnimationCompleted)();
@property UIImageView* imageView;
@end