//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface CSDMomentsNotification : NSObject
{
    MISSING_TYPE *streamToken;	// 8 = 0x8
    MISSING_TYPE *requesterID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00400000003127ab
- (id)init;	// IMP=0x0010000000312775
- (id)initWithStreamToken:(unsigned long long)arg1 requesterID:(id)arg2;	// IMP=0x001000000031272e
@property(nonatomic, readonly) NSString *requesterID;
@property(nonatomic, readonly) unsigned long long streamToken; // @synthesize streamToken;

@end

