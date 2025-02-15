//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaServices/MSVAsyncOperation.h>

@class NSString;
@protocol MLMediaLibraryAccountChangeObserver, _ML3MultiUserDaemonAccountChangeOperationDelegate;

__attribute__((visibility("hidden")))
@interface _ML3MultiUserDaemonAccountChangeOperation : MSVAsyncOperation
{
    NSString *_initialDSID;	// 8 = 0x8
    NSString *_finalDSID;	// 16 = 0x10
    id <_ML3MultiUserDaemonAccountChangeOperationDelegate> _delegate;	// 24 = 0x18
    id <MLMediaLibraryAccountChangeObserver> _accountChangeObserver;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000020b4de
@property(retain, nonatomic) id <MLMediaLibraryAccountChangeObserver> accountChangeObserver; // @synthesize accountChangeObserver=_accountChangeObserver;
@property(nonatomic) __weak id <_ML3MultiUserDaemonAccountChangeOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *finalDSID; // @synthesize finalDSID=_finalDSID;
@property(readonly, copy, nonatomic) NSString *initialDSID; // @synthesize initialDSID=_initialDSID;
- (void)execute;	// IMP=0x000000000020b099
- (id)initWithInitialDSID:(id)arg1 finalDSID:(id)arg2 accountChangeObserver:(id)arg3;	// IMP=0x000000000020afa4

@end

