//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXLayoutEngineDataSourceSnapshot-Protocol.h>

@protocol PXLayoutItemInput, PXSectionedLayoutItem;

@protocol PXSectionedLayoutEngineDataSourceSnapshot <PXLayoutEngineDataSourceSnapshot>
@property(readonly, nonatomic) long long numberOfSections;
- (id <PXLayoutItemInput>)inputForItem:(id <PXSectionedLayoutItem>)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
@end

