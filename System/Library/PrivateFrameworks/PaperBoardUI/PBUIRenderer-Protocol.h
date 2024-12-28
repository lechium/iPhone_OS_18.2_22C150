//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PaperBoardUI/NSObject-Protocol.h>

@class IOSurface;
@protocol PBUIRenderRequest;

@protocol PBUIRenderer <NSObject>
@property(readonly, nonatomic) struct CGColorSpace *colorSpace;
- (void)renderRequest:(id <PBUIRenderRequest>)arg1 completionHandler:(void (^)(IOSurface *, NSError *))arg2;
- (IOSurface *)renderRequest:(id <PBUIRenderRequest>)arg1 error:(out id *)arg2;
@end
