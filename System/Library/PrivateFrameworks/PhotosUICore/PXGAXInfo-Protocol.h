//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXGAXElement-Protocol.h>

@class NSObject, NSString;
@protocol PXAccessibleDisplayAsset, PXAnonymousView;

@protocol PXGAXInfo <PXGAXElement>
@property(readonly, nonatomic) NSObject<PXAnonymousView> *axView;
@property(readonly, nonatomic) id <PXAccessibleDisplayAsset> axAsset;
@property(readonly, nonatomic) NSString *axImageName;
@property(readonly, nonatomic) NSString *axSubtitle;
@property(readonly, nonatomic) NSString *axTitle;
@property(readonly, nonatomic) NSString *axText;
@property(retain, nonatomic) NSString *axIdentifier;
@property(readonly, nonatomic) long long axContentKind;
@end
