//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NEKEnvironment;
@protocol NEKChangeObserver;

@interface NEKStore : NSObject
{
    NEKEnvironment *_environment;	// 8 = 0x8
    id <NEKChangeObserver> _changeObserver;	// 16 = 0x10
}

+ (id)storeForReminderWithEnvironment:(id)arg1;	// IMP=0x004000000000b4fa
+ (id)storeForEventWithEnvironment:(id)arg1;	// IMP=0x001000000000b4ad
- (void).cxx_destruct;	// IMP=0x002000000000b5aa
@property(retain, nonatomic) id <NEKChangeObserver> changeObserver; // @synthesize changeObserver=_changeObserver;
- (void)deleteObjectByID:(id)arg1 store:(id)arg2;	// IMP=0x001000000000b589
- (void)deleteItem:(id)arg1 store:(id)arg2;	// IMP=0x001000000000b583
- (void)updateICS:(id)arg1 store:(id)arg2 session:(id)arg3;	// IMP=0x001000000000b57d
- (void)updateCalendar:(id)arg1 store:(id)arg2;	// IMP=0x001000000000b577
- (void)updateSource:(id)arg1 store:(id)arg2;	// IMP=0x001000000000b571
- (void)removeAllItems;	// IMP=0x001000000000b56b
- (void)saveEventStore:(id)arg1;	// IMP=0x001000000000b565
- (id)freshEventStoreFor:(id)arg1;	// IMP=0x001000000000b55d
- (id)environment;	// IMP=0x001000000000b547
- (id)initWithEnvironment:(id)arg1;	// IMP=0x001000000000b449
- (id)init;	// IMP=0x001000000000b43b

@end
