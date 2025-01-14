//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VCPCNNPoolingBlock
{
    int _px;	// 52 = 0x34
    int _py;	// 56 = 0x38
    int _chunk;	// 60 = 0x3c
}

+ (id)poolingBlockWithPoolX:(int)arg1 poolY:(int)arg2 chunk:(int)arg3;	// IMP=0x006000000014f5d0
- (_Bool)useGPU;	// IMP=0x000000000014fa8b
- (_Bool)supportGPU;	// IMP=0x000000000014fa83
- (int)forward;	// IMP=0x000000000014fa78
- (int)constructBlock:(id)arg1 context:(id)arg2;	// IMP=0x000000000014f71e
- (id)initWithParameters:(int)arg1 poolY:(int)arg2 chunk:(int)arg3;	// IMP=0x000000000014f680

@end

