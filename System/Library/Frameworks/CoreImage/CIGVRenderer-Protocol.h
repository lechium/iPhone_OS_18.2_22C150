//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreImage/GVRenderer-Protocol.h>

@class GVEdge, GVNode, NSArray, NSString, NSURL;

@protocol CIGVRenderer <GVRenderer>
@property _Bool drawEdgesFirst;
@property struct CGSize separation;
@property int direction;
- (void)flushRender;
- (void)drawEdge:(GVEdge *)arg1 withPath:(NSArray *)arg2;
- (void)drawNode:(GVNode *)arg1;
- (_Bool)setCanvasWidth:(unsigned int)arg1 height:(unsigned int)arg2;
- (void)setFileTitle:(NSString *)arg1;
- (void)setFileURL:(NSURL *)arg1;
@end

