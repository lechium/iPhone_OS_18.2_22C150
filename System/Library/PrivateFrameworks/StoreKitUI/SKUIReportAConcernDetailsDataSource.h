//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UITableView;

__attribute__((visibility("hidden")))
@interface SKUIReportAConcernDetailsDataSource : NSObject
{
    UITableView *_tableView;	// 8 = 0x8
    NSString *_placeholder;	// 16 = 0x10
    NSString *_selectedReason;	// 24 = 0x18
    NSString *_privacyNote;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000353c07
@property(copy, nonatomic) NSString *privacyNote; // @synthesize privacyNote=_privacyNote;
@property(copy, nonatomic) NSString *selectedReason; // @synthesize selectedReason=_selectedReason;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x0000000000353b8f
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000000353b3f
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000353ac6
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000353abb
- (id)initWithTableView:(id)arg1;	// IMP=0x0000000000353a2a
- (id)init;	// IMP=0x00000000003539ea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

