//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol TransitSchedulesLineOptionsProviderDelegate;

@interface TransitSchedulesLineOptionsProvider : NSObject
{
    id <TransitSchedulesLineOptionsProviderDelegate> _delegate;	// 8 = 0x8
}

+ (Class)cellClass;	// IMP=0x0020000000669e99
- (void).cxx_destruct;	// IMP=0x002000000066a5e6
@property(nonatomic) __weak id <TransitSchedulesLineOptionsProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)selectedCellAtIndexPath:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x001000000066a5b9
- (_Bool)allowsCellSelection;	// IMP=0x001000000066a5b1
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2 withIdentifier:(id)arg3;	// IMP=0x0010000000669eaa
@property(readonly, nonatomic) NSArray *identifiers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
