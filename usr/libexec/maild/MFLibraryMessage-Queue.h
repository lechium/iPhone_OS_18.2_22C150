//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Message/MFLibraryMessage.h>

@interface MFLibraryMessage (Queue)
+ (unsigned long long)nano_nnmkMailItemStatusFromMSResultsStatus:(unsigned long long)arg1;	// IMP=0x00100000000859af
+ (id)nanoMessageIdsForMailMessages:(id)arg1;	// IMP=0x001000000008595e
+ (unsigned long long)nnmkMailItemStatusFromMFMessageFlags:(unsigned long long)arg1 conversationFlags:(unsigned long long)arg2;	// IMP=0x00100000000858cd
- (long long)mailDropDeliveryState;	// IMP=0x002000000006a786
- (id)nanoLocalMessageId;	// IMP=0x0010000000085813
- (id)nanoMessageId;	// IMP=0x0010000000085776
- (id)nanoMessageWithHeaders:(id)arg1;	// IMP=0x0010000000085047
- (id)nanoMessage;	// IMP=0x0010000000084fd4
@end
