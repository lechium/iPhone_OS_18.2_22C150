//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSMutableDictionary, NSObject, UGCPhotoAlbumCategory, geo_isolater;
@protocol OS_dispatch_queue, UGCMorePhotosDataProviderUpdateDelegate, UGCPhotoViewerBatchRequester;

@interface UGCPlaceDataPhotoListDataProvider
{
    unsigned long long _currentIndex;	// 8 = 0x8
    unsigned long long _initialCount;	// 16 = 0x10
    unsigned long long _batchCount;	// 24 = 0x18
    unsigned long long _totalCount;	// 32 = 0x20
    NSMutableArray *_photoList;	// 40 = 0x28
    NSMutableDictionary *_attributionsByVendorId;	// 48 = 0x30
    geo_isolater *_attributionsByVendorIdIsolator;	// 56 = 0x38
    geo_isolater *_hasObfuscatedPhotosIsolator;	// 64 = 0x40
    id <UGCPhotoViewerBatchRequester> _batchRequester;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_serialQueue;	// 80 = 0x50
    _Bool _isLoadingFirstBatch;	// 88 = 0x58
    _Bool _hasPhotosThatShouldBeObfuscatedWhenInFullScreen;	// 89 = 0x59
    _Bool _isLoading;	// 90 = 0x5a
    unsigned long long _indexOfTappedPhoto;	// 96 = 0x60
    UGCPhotoAlbumCategory *_albumCategory;	// 104 = 0x68
    id <UGCMorePhotosDataProviderUpdateDelegate> _delegate;	// 112 = 0x70
    unsigned long long _shouldLoadNextBatch;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0020000000980707
@property(readonly, nonatomic) unsigned long long shouldLoadNextBatch; // @synthesize shouldLoadNextBatch=_shouldLoadNextBatch;
@property(readonly, nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
- (void)setDelegate:(id)arg1;	// IMP=0x00100000009806d2
- (id)delegate;	// IMP=0x00100000009806b9
- (id)albumCategory;	// IMP=0x00100000009806a8
- (void)setIndexOfTappedPhoto:(unsigned long long)arg1;	// IMP=0x0010000000980697
- (unsigned long long)indexOfTappedPhoto;	// IMP=0x0010000000980686
- (_Bool)isAllowedToShowAddPhotoCallToAction;	// IMP=0x00100000009804a4
- (id)photoList;	// IMP=0x001000000098037f
- (void)_performOnCallbackQueue:(CDUnknownBlockType)arg1;	// IMP=0x00100000009802ac
- (void)_failWithError:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x001000000098019c
- (void)_processResult:(id)arg1;	// IMP=0x001000000097f6c7
- (void)fetchNextBatchRequestIfNeeded;	// IMP=0x001000000097f216
- (id)attributionNames;	// IMP=0x001000000097f00e
- (unsigned long long)totalNumberOfPhotos;	// IMP=0x001000000097effd
- (_Bool)hasPhotosThatShouldBeObfuscatedWhenInFullScreen;	// IMP=0x001000000097ef35
- (_Bool)hasDataToShow;	// IMP=0x001000000097ee65
- (_Bool)hasReachedTotalCount;	// IMP=0x001000000097ed89
- (id)initWitBatchRequester:(id)arg1 initialCount:(unsigned long long)arg2 batchCount:(unsigned long long)arg3 totalCount:(unsigned long long)arg4 albumCategory:(id)arg5 delegate:(id)arg6;	// IMP=0x001000000097eb80

@end

