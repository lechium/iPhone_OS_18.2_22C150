//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpotlightUIShared/NSObject-Protocol.h>
#import <SpotlightUIShared/SUIAppDependency-Protocol.h>

@protocol SUIAppIntentsPresentationHelper <NSObject, SUIAppDependency>
@property(readonly) _Bool spotlightIsVisible;
- (void)dismissSpotlight;
- (void)presentSpotlightWithCompletionHandler:(void (^)(void))arg1;
@end
