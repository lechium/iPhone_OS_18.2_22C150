//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ContainerHeaderView, GEOMiniCard, NSString, UITableView, VKRouteAnnotation;

@interface RouteAnnotationContaineeViewController
{
    _Bool _didStartObservingTableViewContentSize;	// 8 = 0x8
    VKRouteAnnotation *_routeAnnotation;	// 16 = 0x10
    CDUnknownBlockType _dismissHandler;	// 24 = 0x18
    ContainerHeaderView *_headerView;	// 32 = 0x20
    UITableView *_tableView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000aea741
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) ContainerHeaderView *headerView; // @synthesize headerView=_headerView;
@property(copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
@property(retain, nonatomic) VKRouteAnnotation *routeAnnotation; // @synthesize routeAnnotation=_routeAnnotation;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000aea66c
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0010000000aea636
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0010000000aea62b
- (void)headerViewTapped:(id)arg1;	// IMP=0x0010000000aea5ee
- (void)headerViewButtonTapped:(id)arg1 buttonType:(unsigned long long)arg2;	// IMP=0x0010000000aea5dc
- (double)heightForLayout:(unsigned long long)arg1;	// IMP=0x0010000000aea4d0
- (void)handleDismissAction:(id)arg1;	// IMP=0x0010000000aea445
- (id)contentView;	// IMP=0x0010000000aea433
- (void)applyAlphaToContent:(double)arg1;	// IMP=0x0010000000aea3bf
@property(readonly, nonatomic) GEOMiniCard *infoCard;
- (void)updateTheme;	// IMP=0x0010000000aea305
- (void)_updateImageInCell:(id)arg1;	// IMP=0x0010000000aea0ff
- (void)_updateContentInCell:(id)arg1;	// IMP=0x0010000000ae9dde
- (struct CGSize)calculatePreferredContentSize;	// IMP=0x0010000000ae9d16
- (void)_updatePreferredContentSize;	// IMP=0x0010000000ae9c97
- (void)_updateContent;	// IMP=0x0010000000ae9b52
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000ae9b05
- (void)dealloc;	// IMP=0x0010000000ae9a75
- (void)viewDidLoad;	// IMP=0x0010000000ae9153
- (_Bool)_canShowWhileLocked;	// IMP=0x0010000000ae90f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
