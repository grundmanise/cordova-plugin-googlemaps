#import "MarkerAnimationDelegate.h"

@implementation MarkerAnimationDelegate
- (void)animationDidStop:(CAAnimation *)theAnimation finished:(BOOL)flag {
    if (flag) {
        if( self.onAnimationCompleted ){
            self.onAnimationCompleted();
        }
    }
}

@end