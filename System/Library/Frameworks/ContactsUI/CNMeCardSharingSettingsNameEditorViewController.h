//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSArray, NSString, UICollectionView;

__attribute__((visibility("hidden")))
@interface CNMeCardSharingSettingsNameEditorViewController : UIViewController
{
    UICollectionView *_collectionView;	// 8 = 0x8
    NSArray *_textFields;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000026e41e
@property(retain, nonatomic) NSArray *textFields; // @synthesize textFields=_textFields;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000026e2cb
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000026e287
- (void)doneTapped;	// IMP=0x000000000026e26e
- (void)setUpCollectionView;	// IMP=0x000000000026e08a
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000026dff6
- (void)viewDidLoad;	// IMP=0x000000000026dfb5
- (id)initWithTextFields:(id)arg1;	// IMP=0x000000000026de66

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

