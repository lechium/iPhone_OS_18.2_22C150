//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSObject;
@protocol PXAnonymousScrollView, PXGAXGroup, PXGAXResponder;

@protocol PXGAXResponder <NSObject>
@property(nonatomic) __weak id <PXGAXResponder> axNextResponder;
- (_Bool)axGroup:(id <PXGAXGroup>)arg1 didRequestToPerformAction:(long long)arg2 userInfo:(id)arg3;
- (void)axGroup:(id <PXGAXGroup>)arg1 didChange:(unsigned long long)arg2 userInfo:(id)arg3;
- (NSObject<PXAnonymousScrollView> *)axContainingScrollViewForAXGroup:(id <PXGAXGroup>)arg1;
@end

