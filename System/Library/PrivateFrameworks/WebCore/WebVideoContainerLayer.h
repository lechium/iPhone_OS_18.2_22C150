//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class AVPlayerLayer;

__attribute__((visibility("hidden")))
@interface WebVideoContainerLayer : CALayer
{
    struct RetainPtr<AVPlayerLayer> _playerLayer;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x0000000000f36040
- (void).cxx_destruct;	// IMP=0x0000000000f36010
- (void)setPosition:(struct CGPoint)arg1;	// IMP=0x0000000000f35dc0
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000f35c30
@property(retain, nonatomic) AVPlayerLayer *playerLayer;

@end

