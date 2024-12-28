//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "EKSerializableObject.h"

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface EKSerializableAttachment : EKSerializableObject
{
    NSURL *_urlOnDisk;	// 8 = 0x8
    NSString *_contentTypeFromServer;	// 16 = 0x10
}

+ (id)classesForKey;	// IMP=0x00600000001156f6
- (void).cxx_destruct;	// IMP=0x00000000001157ab
@property(retain, nonatomic) NSString *contentTypeFromServer; // @synthesize contentTypeFromServer=_contentTypeFromServer;
@property(retain, nonatomic) NSURL *urlOnDisk; // @synthesize urlOnDisk=_urlOnDisk;
- (id)createAttachment;	// IMP=0x0000000000115732
- (id)initWithAttachment:(id)arg1;	// IMP=0x0000000000115703

@end
