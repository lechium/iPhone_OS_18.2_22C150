//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, UIBezierPath;

__attribute__((visibility("hidden")))
@interface UIKBHandwritingBezierPathPointFIFO
{
    UIBezierPath *_path;	// 16 = 0x10
    CDUnknownBlockType _emissionHandler;	// 24 = 0x18
    NSMutableArray *_prevPoints;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000e702b0
@property(retain, nonatomic) NSMutableArray *prevPoints; // @synthesize prevPoints=_prevPoints;
@property(copy) CDUnknownBlockType emissionHandler; // @synthesize emissionHandler=_emissionHandler;
@property(retain, nonatomic) UIBezierPath *path; // @synthesize path=_path;
- (void)clear;	// IMP=0x0000000000e701a1
- (void)flush;	// IMP=0x0000000000e6ff7f
- (void)addPoint:(struct)arg1;	// IMP=0x0000000000e6f8a3
- (id)initWithFIFO:(id)arg1;	// IMP=0x0000000000e6f7e9

@end
