//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXMutableLayoutEngine-Protocol.h>

@protocol PXSectionedLayoutDataSourceChangeDetails, PXSectionedLayoutEngineDataSourceSnapshot, PXSectionedLayoutItem;

@protocol PXMutableSectionedLayoutEngine <PXMutableLayoutEngine>
@property(nonatomic) struct CGSize seedSize;
@property(retain, nonatomic) id <PXSectionedLayoutItem> seedItem;
- (void)setDataSourceSnapshot:(id <PXSectionedLayoutEngineDataSourceSnapshot>)arg1 withChangeDetails:(id <PXSectionedLayoutDataSourceChangeDetails>)arg2;
@end
