//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewDiffableDataSource.h>

@protocol MRUDiffableDataSourceDelegate;

__attribute__((visibility("hidden")))
@interface MRUDiffableDataSource : UITableViewDiffableDataSource
{
    _Bool _supportsReordering;	// 8 = 0x8
    _Bool _supportsEditing;	// 9 = 0x9
    id <MRUDiffableDataSourceDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004e471
@property(nonatomic) _Bool supportsEditing; // @synthesize supportsEditing=_supportsEditing;
@property(nonatomic) _Bool supportsReordering; // @synthesize supportsReordering=_supportsReordering;
@property(nonatomic) __weak id <MRUDiffableDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000004e2cd
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x000000000004e2bd
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;	// IMP=0x000000000004e121
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;	// IMP=0x000000000004e111

@end
