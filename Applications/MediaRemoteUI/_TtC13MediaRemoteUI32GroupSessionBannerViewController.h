//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;
@protocol BNPresentableContext;

@interface _TtC13MediaRemoteUI32GroupSessionBannerViewController
{
    MISSING_TYPE *$__lazy_storage_$_routeIcon;	// 80 = 0x50
    MISSING_TYPE *trailingIcon;	// 88 = 0x58
    MISSING_TYPE *$__lazy_storage_$_titleContentItem;	// 96 = 0x60
    MISSING_TYPE *$__lazy_storage_$_pillView;	// 104 = 0x68
    MISSING_TYPE *presentableContext;	// 112 = 0x70
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x0020000000016d10
- (void).cxx_destruct;	// IMP=0x0040000000016e00
@property(nonatomic, readonly) _Bool providesHostedContent;
@property(nonatomic) __weak id <BNPresentableContext> presentableContext; // @synthesize presentableContext;
- (_Bool)_canShowWhileLocked;	// IMP=0x0010000000016d00
@property(nonatomic, readonly) struct UIEdgeInsets bannerContentOutsets;
- (void)loadView;	// IMP=0x0010000000016c30
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000016c10

@end

