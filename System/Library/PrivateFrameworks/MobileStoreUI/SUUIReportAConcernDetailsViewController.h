//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSString, SUUIReportAConcernConfiguration, SUUIReportAConcernDetailsDataSource, SUUIReportAConcernMetadata, UITableView;

__attribute__((visibility("hidden")))
@interface SUUIReportAConcernDetailsViewController : UIViewController
{
    CDUnknownBlockType _completion;	// 8 = 0x8
    SUUIReportAConcernMetadata *_metadata;	// 16 = 0x10
    SUUIReportAConcernConfiguration *_configuration;	// 24 = 0x18
    SUUIReportAConcernDetailsDataSource *_dataSource;	// 32 = 0x20
    UITableView *_tableView;	// 40 = 0x28
    double _keyboardHeight;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000032bb87
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SUUIReportAConcernDetailsDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) SUUIReportAConcernConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) SUUIReportAConcernMetadata *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)_keyboardWillHide:(id)arg1;	// IMP=0x000000000032b7df
- (void)_keyboardWillShow:(id)arg1;	// IMP=0x000000000032b33d
- (double)_detailsCellHeight;	// IMP=0x000000000032b24f
- (id)_detailsText;	// IMP=0x000000000032b1a3
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000032b191
- (void)submitPressed:(id)arg1;	// IMP=0x000000000032a79b
- (void)viewWillLayoutSubviews;	// IMP=0x000000000032a6d2
- (void)viewDidLoad;	// IMP=0x000000000032a319
- (void)dealloc;	// IMP=0x000000000032a277
- (id)initWithConfiguration:(id)arg1;	// IMP=0x000000000032a186
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000032a146
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000032a106

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

