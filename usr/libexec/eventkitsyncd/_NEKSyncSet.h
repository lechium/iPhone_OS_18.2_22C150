//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface _NEKSyncSet : NSObject
{
    NSArray *_stores;	// 8 = 0x8
    NSArray *_calendars;	// 16 = 0x10
    NSArray *_tasks;	// 24 = 0x18
    NSArray *_events;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000018bc0
@property(retain, nonatomic) NSArray *events; // @synthesize events=_events;
@property(retain, nonatomic) NSArray *tasks; // @synthesize tasks=_tasks;
@property(retain, nonatomic) NSArray *calendars; // @synthesize calendars=_calendars;
@property(retain, nonatomic) NSArray *stores; // @synthesize stores=_stores;

@end

