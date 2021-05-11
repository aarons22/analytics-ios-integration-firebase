//
//  SEGFirebaseIntegration.h
//  Pods
//

#import <Foundation/Foundation.h>

#if defined(__has_include) && __has_include(<Analytics/SEGAnalytics.h>)
#import <Analytics/SEGIntegration.h>
#import <Firebase/Firebase.h>
#else
@import Segment;
#endif


@interface SEGFirebaseIntegration : NSObject <SEGIntegration>

@property (nonatomic, strong) NSDictionary *settings;
@property (nonatomic, strong) Class firebaseClass;

- (id)initWithSettings:(NSDictionary *)settings;
- (id)initWithSettings:(NSDictionary *)settings andFirebase:(id)firebaseClass;
- (id)initWithSettings:(NSDictionary *)settings andOptions:(FIROptions*)options;

@end
