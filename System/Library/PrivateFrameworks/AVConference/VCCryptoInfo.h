//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCCryptoInfo : NSObject
{
    struct tagSRTPINFO _SRTPInfo;	// 8 = 0x8
}

@property(readonly) struct tagSRTPINFO *state;
- (void)dealloc;	// IMP=0x0000000000091278
- (id)initWithSRTPInfo:(struct tagSRTPINFO *)arg1;	// IMP=0x0000000000091201

@end
