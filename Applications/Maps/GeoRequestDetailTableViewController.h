//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewController.h>

@class GEORequestCounterInfo, NSArray;

@interface GeoRequestDetailTableViewController : UITableViewController
{
    GEORequestCounterInfo *_counterInfo;	// 8 = 0x8
    NSArray *_requestTypes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000897f51
@property(retain, nonatomic) NSArray *requestTypes; // @synthesize requestTypes=_requestTypes;
@property(retain, nonatomic) GEORequestCounterInfo *counterInfo; // @synthesize counterInfo=_counterInfo;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000897c7b
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0010000000897af5
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0010000000897a53
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0010000000897a36
- (CDStruct_026435ec)typeForSection:(long long)arg1;	// IMP=0x00100000008979a9
- (_Bool)isValidSection:(long long)arg1;	// IMP=0x0010000000897973
- (id)initWithGEORequestCounterInfo:(id)arg1;	// IMP=0x00100000008978d3

@end

