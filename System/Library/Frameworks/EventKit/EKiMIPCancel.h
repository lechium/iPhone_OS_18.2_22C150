//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData;

__attribute__((visibility("hidden")))
@interface EKiMIPCancel
{
    NSArray *_attendees;	// 16 = 0x10
    NSData *_attachmentData;	// 24 = 0x18
}

+ (_Bool)shouldSendEmailForEvent:(id)arg1 removedAttendees:(id *)arg2;	// IMP=0x0060000000157a30
- (void).cxx_destruct;	// IMP=0x0000000000157e85
- (int)icsMethod;	// IMP=0x0000000000157e7a
- (id)emailAttachmentName;	// IMP=0x0000000000157e6d
- (id)emailBody;	// IMP=0x0000000000157d3b
- (id)emailSubject;	// IMP=0x0000000000157c5c
- (id)attendees;	// IMP=0x0000000000157c47
- (id)attachmentData;	// IMP=0x0000000000157c32
- (id)initWithEvent:(id)arg1 andAttendees:(id)arg2;	// IMP=0x0000000000157b56

@end
