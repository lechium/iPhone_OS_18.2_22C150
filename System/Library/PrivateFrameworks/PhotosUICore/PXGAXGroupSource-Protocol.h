//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSString;
@protocol PXGAXGroup;

@protocol PXGAXGroupSource <NSObject>
@property(readonly, nonatomic) _Bool axShouldBeConsideredAsSubgroup;
@property(readonly, nonatomic) _Bool axShouldSearchLeafsInSubgroups;
@property(readonly, nonatomic) struct CGRect axVisibleRect;
@property(readonly, nonatomic) struct CGRect axFrame;
@property(readonly, nonatomic) NSString *axLocalizedLabel;
- (struct CGPoint)axConvertPoint:(struct CGPoint)arg1 toDescendantGroup:(id <PXGAXGroup>)arg2;
- (struct CGPoint)axConvertPoint:(struct CGPoint)arg1 fromDescendantGroup:(id <PXGAXGroup>)arg2;
- (struct CGRect)axConvertRect:(struct CGRect)arg1 toDescendantGroup:(id <PXGAXGroup>)arg2;
- (struct CGRect)axConvertRect:(struct CGRect)arg1 fromDescendantGroup:(id <PXGAXGroup>)arg2;
@end
