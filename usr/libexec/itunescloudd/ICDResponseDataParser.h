//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ICDResponseDataParser : NSObject
{
}

+ (id)_parseListingItemWithBytes:(const char *)arg1 length:(unsigned int)arg2 usingHandler:(CDUnknownBlockType)arg3;	// IMP=0x0040000000123078
+ (id)_parseErrorResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0010000000122e10
+ (id)_parsePlayStatusResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x001000000012220c
+ (id);	// IMP=0x0010000000122063
+ (id)_parseBrowseListingWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0010000000121eb4
+ (id)_parseListingCollectionWithBytes:(const char *)arg1 length:(unsigned long long)arg2 usingHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000121cc0
+ (id)_parseItemsResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2 usingHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000121968
+ (id)_parseUpdateTypeWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0010000000121887
+ (id)_parseEditCommandResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0010000000121687
+ (id)_parseDictionaryCollectionWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x001000000012140c
+ (id)_parseDeletedIDListingWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00100000001211cc
+ (id)_parseControlPromptResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0010000000120f90
+ (id)_parseControlInterfacesResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0010000000120dda
+ (id)_parseCloudLyricsInfoResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0010000000120c1b
+ (id)_parseCloudArtworkInfoResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0010000000120a5c
+ (id)_parseBulkCloudLyricsInfoResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00100000001208d0
+ (id)_parseBulkCloudArtworkInfoResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0010000000120744
+ (id)_parseAuthorizedAccountTokenWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0010000000120460
+ (id)_parseUpdateResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0010000000120295
+ (id)_parseLoginResponseWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00100000001200ca
+ (id)_parseResponseCode:(unsigned int)arg1 bytes:(const char *)arg2 length:(unsigned long long)arg3 usingHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000011fdba
+ (unsigned long long)_parseItemPropertyCountWithBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x001000000011fd92
+ (void)enumerateDeletedItemsInResponseData:(id)arg1 usingHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000011fc1f
+ (void)enumerateItemsInResponseData:(id)arg1 usingHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000011fb76
+ (void)parseItemWithBytes:(const char *)arg1 length:(unsigned long long)arg2 usingHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000011faa3
+ (unsigned long long)parseItemWithBytes:(const char *)arg1 length:(unsigned long long)arg2 valuesOut:(CDStruct_4a344573 *)arg3 valuesCapacity:(unsigned long long)arg4;	// IMP=0x001000000011f73c
+ (id)enumerateRawItemsInResponseData:(id)arg1 usingHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000011f5cc
+ (id)parseResponseData:(id)arg1;	// IMP=0x001000000011f5b8
+ (id)parseErrorInResponseData:(id)arg1;	// IMP=0x001000000011f464

@end

