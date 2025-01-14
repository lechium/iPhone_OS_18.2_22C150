//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class JSContext, MISSING_TYPE, NSString;

@interface VUIJSSportsJavascriptInterface : NSObject
{
    MISSING_TYPE *context;	// 8 = 0x8
    MISSING_TYPE *tierManagerClientType;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000000009e01f2
- (id)init;	// IMP=0x00000000009e01bd
- (id)isSportsFeatureEnabledWithLeagueId:(id)arg1 featureName:(id)arg2;	// IMP=0x00000000009e0100
- (id)isPlayByPlayEnabledWithLeagueId:(id)arg1;	// IMP=0x00000000009dffea
- (id)getTierTypeWithLeagueId:(id)arg1;	// IMP=0x00000000009dff19
- (void)registerWithRequest:(id)arg1 successHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000009dfbf5
- (id)checkActivityExistsFor:(id)arg1;	// IMP=0x00000000009df1c7
- (id)initWithContext:(id)arg1;	// IMP=0x00000000009df11f
@property(nonatomic, readonly) NSString *storefrontId;
@property(nonatomic, readonly) JSContext *context; // @synthesize context;

@end

