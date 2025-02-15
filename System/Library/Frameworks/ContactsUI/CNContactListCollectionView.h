//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionView.h>

@class CNContactListCountFooterView, NSObject;
@protocol CNContactListCollectionViewDelegate, CNContactListCountViewDelegate;

__attribute__((visibility("hidden")))
@interface CNContactListCollectionView : UICollectionView
{
    long long _contactCount;	// 8 = 0x8
    long long _duplicateCount;	// 16 = 0x10
    long long _selectedCount;	// 24 = 0x18
    NSObject<CNContactListCountViewDelegate> *_countViewDelegate;	// 32 = 0x20
    NSObject<CNContactListCollectionViewDelegate> *_contactListCollectionViewDelegate;	// 40 = 0x28
    CNContactListCountFooterView *_contactCountView;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000002a9113
@property(retain, nonatomic) CNContactListCountFooterView *contactCountView; // @synthesize contactCountView=_contactCountView;
@property(nonatomic) __weak NSObject<CNContactListCollectionViewDelegate> *contactListCollectionViewDelegate; // @synthesize contactListCollectionViewDelegate=_contactListCollectionViewDelegate;
@property(nonatomic) __weak NSObject<CNContactListCountViewDelegate> *countViewDelegate; // @synthesize countViewDelegate=_countViewDelegate;
@property(nonatomic) long long selectedCount; // @synthesize selectedCount=_selectedCount;
@property(nonatomic) long long duplicateCount; // @synthesize duplicateCount=_duplicateCount;
@property(nonatomic) long long contactCount; // @synthesize contactCount=_contactCount;
- (void)deselectItemAtIndexPath:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000002a9034
- (void)selectItemAtIndexPath:(id)arg1 animated:(_Bool)arg2 scrollPosition:(unsigned long long)arg3;	// IMP=0x00000000002a8ff3
- (void)updateSelectedContactCount;	// IMP=0x00000000002a8ebb
- (unsigned long long)globalIndexForItemAtIndexPath:(id)arg1;	// IMP=0x00000000002a8cb3
- (id)init;	// IMP=0x00000000002a8c54

@end

