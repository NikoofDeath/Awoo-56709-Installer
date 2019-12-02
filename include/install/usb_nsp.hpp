#pragma once

#include <string>
#include "install/nsp.hpp"

namespace tin::install::nsp
{
    class USBNSP : public NSP
    {
        private:
            std::string m_nspName;

        public:
            USBNSP(std::string nspName);

            virtual void StreamToPlaceholder(std::shared_ptr<nx::ncm::ContentStorage>& contentStorage, NcmContentId placeholderId) override;
            virtual void BufferData(void* buf, off_t offset, size_t size) override;
    };
}