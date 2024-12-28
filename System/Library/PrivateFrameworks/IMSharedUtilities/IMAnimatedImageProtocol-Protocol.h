//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSURL;
@protocol IMAnimatedImageProtocol;

@protocol IMAnimatedImageProtocol
+ (id)animatedImageFromOptimizedBitmapAtFileURL:(NSURL *)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSArray *frames;
@property(readonly, copy, nonatomic) NSArray *durations;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) struct CGSize size;
- (id)frameForAnimationTime:(double)arg1;
- (_Bool)writeAsOptimizedBitmapToFileURL:(NSURL *)arg1 error:(id *)arg2;
- (id <IMAnimatedImageProtocol>)initWithImages:(NSArray *)arg1 durations:(NSArray *)arg2;
@end
