//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VFX/NSObject-Protocol.h>

@class MTKView;

@protocol MTKViewDelegate <NSObject>
- (void)drawInMTKView:(MTKView *)arg1;
- (void)mtkView:(MTKView *)arg1 drawableSizeWillChange:(struct CGSize)arg2;
@end

