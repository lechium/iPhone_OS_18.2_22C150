//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIViewController.h"

@class SUUIDeveloperInfo, SUUIDeveloperInfoView, UIScrollView;

__attribute__((visibility("hidden")))
@interface SUUIDeveloperInfoViewController : SUUIViewController
{
    SUUIDeveloperInfo *_developerInfo;	// 8 = 0x8
    SUUIDeveloperInfoView *_infoView;	// 16 = 0x10
    UIScrollView *_scrollView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001aa0d0
@property(readonly, nonatomic) SUUIDeveloperInfo *developerInfo; // @synthesize developerInfo=_developerInfo;
- (void)loadView;	// IMP=0x00000000001a9d27
- (id)initWithDeveloperInfo:(id)arg1;	// IMP=0x00000000001a9cad

@end

