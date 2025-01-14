//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MFNotificationMessage, NSString;

@interface _MFDelayedNotification : NSObject
{
    _Atomic _Bool _processing;	// 8 = 0x8
    _Atomic _Bool _invalidated;	// 9 = 0x9
    MFNotificationMessage *_notificationMessage;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    double _submissionDate;	// 32 = 0x20
    id _context;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000006a753
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(nonatomic) double submissionDate; // @synthesize submissionDate=_submissionDate;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) MFNotificationMessage *notificationMessage; // @synthesize notificationMessage=_notificationMessage;
- (void)process;	// IMP=0x001000000006a6e3
- (_Bool)isProcessing;	// IMP=0x001000000006a6d8
- (void)invalidate;	// IMP=0x001000000006a6cd
- (_Bool)isInvalidated;	// IMP=0x001000000006a6c2
- (id)initWithNotificationMessage:(id)arg1 identifier:(id)arg2 submissionDate:(double)arg3 context:(id)arg4;	// IMP=0x001000000006a59c

@end

