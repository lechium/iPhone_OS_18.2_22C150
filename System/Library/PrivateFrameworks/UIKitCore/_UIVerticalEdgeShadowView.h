//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIVerticalEdgeShadowView
{
    double _width;	// 16 = 0x10
    unsigned long long _edge;	// 24 = 0x18
}

@property(readonly, nonatomic) unsigned long long edge; // @synthesize edge=_edge;
@property(readonly, nonatomic) double width; // @synthesize width=_width;
- (void)_loadImageIfNecessary;	// IMP=0x0000000000d6c70f
- (void)layoutSubviews;	// IMP=0x0000000000d6c6ce
- (id)initWithWidth:(double)arg1 edge:(unsigned long long)arg2;	// IMP=0x0000000000d6c62c

@end
