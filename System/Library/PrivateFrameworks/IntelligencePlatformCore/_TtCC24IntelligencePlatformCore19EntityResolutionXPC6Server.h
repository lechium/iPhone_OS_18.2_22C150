//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GDEntityResolutionRequest, NSString;

@interface _TtCC24IntelligencePlatformCore19EntityResolutionXPC6Server : NSObject
{
}

- (void).cxx_destruct;	// IMP=0x00000000001c9a9b
- (id)init;	// IMP=0x00000000001c9a7a
- (void)generateMentionsForQuery:(NSString *)arg1 withCompletion:(void (^)(GDMentionGenerationResult *, NSError *))arg2;	// IMP=0x00000000001c9867
- (void)submitCollectionQuery:(GDEntityResolutionRequest *)arg1 withCompletion:(void (^)(GDEntityResolutionCollectionResult *, NSError *))arg2;	// IMP=0x00000000001c8ab8
- (void)submitQuery:(GDEntityResolutionRequest *)arg1 withCompletion:(void (^)(GDEntityResolutionResult *, NSError *))arg2;	// IMP=0x00000000001c858d
- (void)warmupForMode:(long long)arg1 withCompletion:(void (^)(_Bool, NSError *))arg2;	// IMP=0x00000000001c6feb

@end
