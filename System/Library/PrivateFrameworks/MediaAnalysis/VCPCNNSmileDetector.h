//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPCNNSmileDetector : NSObject
{
}

+ (id)detector;	// IMP=0x0080000000073122
- (int)detectSmileForFace:(struct CGRect)arg1 inBuffer:(struct __CVBuffer *)arg2 smile:(_Bool *)arg3;	// IMP=0x00000000000731e8
- (int)computeSmileScore:(float *)arg1;	// IMP=0x00000000000731dd
- (float *)getInputBuffer;	// IMP=0x00000000000731d5

@end

