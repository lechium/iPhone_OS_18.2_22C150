//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIImage;
@protocol UINamedLayerContentProvider;

__attribute__((visibility("hidden")))
@interface _UIStackedImageSingleNamedLayerImage : NSObject
{
    UIImage *_imageObj;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000001aa0baf
@property(retain, nonatomic) UIImage *imageObj; // @synthesize imageObj=_imageObj;
@property(readonly, nonatomic) int blendMode;
@property(readonly, nonatomic) double opacity;
@property(readonly, nonatomic) struct CGRect frame;
@property(readonly, nonatomic) NSString *name;

// Remaining properties
@property(readonly, nonatomic) id <UINamedLayerContentProvider> contentProvider;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<UINamedLayerContentProvider>",?,R,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool fixedFrame;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
