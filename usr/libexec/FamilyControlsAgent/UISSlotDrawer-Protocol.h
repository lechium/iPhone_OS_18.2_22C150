//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class UISSlotStyle, UISSlotTag;
@protocol UISDrawing;

@protocol UISSlotDrawer <NSObject>

@optional
- (id <UISDrawing>)drawingWithStyle:(UISSlotStyle *)arg1 tag:(id)arg2 forRemote:(_Bool)arg3;
- (void)getImageWithStyle:(UISSlotStyle *)arg1 tag:(UISSlotTag *)arg2 forRemote:(_Bool)arg3 reply:(void (^)(struct CGImage *, NSError *))arg4;
- (struct CGImage *)imageWithStyle:(UISSlotStyle *)arg1 tag:(UISSlotTag *)arg2 forRemote:(_Bool)arg3;
@end
