#import <Foundation/Foundation.h>

#if defined(__has_include) && __has_include(<Analytics/SEGAnalytics.h>)
#import <Analytics/SEGIntegrationFactory.h>
#import <Firebase/Firebase.h>
#else
@import Segment;
#endif

@interface SEGFirebaseIntegrationFactory : NSObject <SEGIntegrationFactory>

@property (nonatomic, strong) FIROptions *options;

+ (instancetype)instance;

+ (instancetype)instance:(FIROptions *)options;

@end
