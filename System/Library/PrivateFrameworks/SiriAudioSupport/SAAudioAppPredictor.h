//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface SAAudioAppPredictor : NSObject
{
    MISSING_TYPE *selector;	// 8 = 0x8
    MISSING_TYPE *caller;	// 48 = 0x30
}

+ (void)unsafeReleaseModelWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x006000000001aba0
- (void).cxx_destruct;	// IMP=0x000000000001ac80
- (void)predictWithSearch:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001a970
- (void)disambiguationSelectedWithBundleIdentifier:(id)arg1 requestId:(id)arg2;	// IMP=0x0000000000018050
- (void)warmWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000017230
- (id)initWithCaller:(long long)arg1;	// IMP=0x0000000000016990
- (id)init;	// IMP=0x0000000000016300

@end
