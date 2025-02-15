//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreRE/NSObject-Protocol.h>

@protocol VFXRERenderTargetInfo <NSObject>
@property(readonly, nonatomic) unsigned long long depthStencilPixelFormat;
@property(readonly, nonatomic) long long sampleCount;
@property(readonly, nonatomic) _Bool vrrEnabled;
- (unsigned long long)colorPixelFormatAtIndex:(long long)arg1;

@optional
@property(readonly, nonatomic) unsigned long long stencilPixelFormat;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,R,N

@property(readonly, nonatomic) unsigned long long depthPixelFormat;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,R,N

@end

