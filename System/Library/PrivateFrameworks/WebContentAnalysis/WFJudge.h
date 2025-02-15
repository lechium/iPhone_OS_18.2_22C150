//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WFLSMMap, WFSystemContentWhitelist;

__attribute__((visibility("hidden")))
@interface WFJudge : NSObject
{
    WFLSMMap *map;	// 8 = 0x8
    WFSystemContentWhitelist *whitelist;	// 16 = 0x10
}

+ (id)defaultJudge;	// IMP=0x0060000000009dfe
+ (id)defaultLSMMapPath;	// IMP=0x0060000000009d9b
- (id)pronounceOnPageContent:(id)arg1 pageURL:(id)arg2 whitelistUserPreferences:(id)arg3 debugPage:(id *)arg4 pageTitle:(id *)arg5;	// IMP=0x000000000000a409
- (id)pronounceOnPageContent:(id)arg1 pageURL:(id)arg2 debugPage:(id *)arg3 pageTitle:(id *)arg4;	// IMP=0x000000000000a314
- (id)_pronounceOnWebpage:(id)arg1;	// IMP=0x000000000000a0a8
- (id)pronounceOnWebpage:(id)arg1;	// IMP=0x000000000000a096
- (void)dealloc;	// IMP=0x000000000000a04c
- (id)initWithMap:(id)arg1 systemContentWhitelist:(id)arg2;	// IMP=0x0000000000009fe3
- (id)initWithMap:(id)arg1;	// IMP=0x0000000000009f9c

@end

